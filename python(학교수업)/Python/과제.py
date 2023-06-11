"""
병원 환자 관리 프로그램
환자 조회를 구현할때는 gpt 좀 사용해서 코드를 줄여봤습니다.

"""

#환자 정보 딕셔너리
patients = {}




# 환자 추가 
def add_patient():
    partient_id = input('환자 ID: ')
    name= input('환자 이름: ')
    age = input('환자 나이: ')
    condition = input('환자 상태: ')

    patient ={
        '이름': name,
        '나이': age,
        '상태': condition
    }
    patients[partient_id] = patient
    print(f'{name} 환자가 추가되었습니다.')

# 환자 조회
def search_patient():
    search_query = input('환자 ID 또는 이름을 입력하세요: ')
    found = False #플래그성 변수
    for patient_id, patient in patients.items():
        if search_query == patient_id or search_query.lower() == patient['이름'].lower():
            print('=== 환자 정보 ===')
            print(f'환자 ID: {patient_id}')
            for key, value in patient.items():
                print(f'{key}: {value}')
            found = True
    if not found:
        print('해당 환자를 찾을 수 없습니다.')

    # 입원 상태 업데이트

def update_condition():
    patient_id = input('환자 ID: ')
    if (patient_id in patients):
        condition = input('변경할 상태: ')
        patients[patient_id]['상태'] = condition
        print('상태가 업데이트되었습니다.')
    else:
        print('해당 환자를 찾을 수 없습니다.')

# 환자 퇴원
def delete_patient():
    patient_id = input('환자 ID: ')
    if patient_id in patients:
        del patients[patient_id]
        print('환자가 퇴원되었습니다.')
    else:
        print('해당 환자를 찾을 수 없습니다.')


# 프로그램 실행

while True:
    print('=== 환자 입원 관리 프로그램 ===')
    print('1. 환자 추가')
    print('2. 입원 상태 업데이트')
    print('3. 환자 조회')
    print('4. 환자 퇴원')
    print('5. 종료')
    choice = input('원하는 기능을 선택하세요: ')

    if choice == '1':
        add_patient()
    elif choice == '2':
        update_condition()
    elif choice == '3':
        search_patient()
    elif choice == '4':
        delete_patient()
    elif choice == '5':
        break
    else:
        print('잘못된 입력입니다. 다시 입력해주세요.')

