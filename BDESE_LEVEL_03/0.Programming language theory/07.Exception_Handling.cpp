/*
	<<07.예외 처리(Exception_Handling)>>
*/
/*
	1장. 예외 처리의 개요

		예외 처리: 런타임 중, 비정상적인 오류가 발생 시, 프로그램을 중단시키지 않고
				  적절한 행동으로 다시 정상적으로 실행되도록 하는 메커니즘.

		-> 예외 처리기 : 예외 처리를 담당하는 코드 혹은 부분.
*/
/*
	2장 Ada의 예외 처리

	미리 정의된 예외 및 사용자 정의 예외 지원

		CONSTRAINT_ERROR : 열거형 자료의 제한을 능가하거나, 0으로 나누기 등
		NUMERIC_ERROR : 연산 결과가 영역을 벗어났을 떄
		SELECT_ERROR : 조건문에서 else 부분이 없을 때, 탈출가능한 조건이 없을 경우
		STORAGE_ERROR : 동적 메모리 할당 실패.
		TASKING_ERROR : 병행성 제어 오류.
		PROGRAM_ERROR : 선언의 동적 처리 실패.

		begin ~ end 절에, begin~excepion~end로 exception절 추가.

		ex)	
			begin
			...

				exception
					when CONSTRAINT_ERROR => put("...");

			...
			end excep;

	
	예외 처리기가 넘겨받은 예외 모든 부분을 처리할 수 없는 경우 예외의 일부만 처리하고, 다시 예외를 전파하도록, raise절 지원
			
		 ex)
			begin
			...


				exception
					when CONSTRAINT_ERROR => put("...");
					...
						raise;

			...
			end excep;
	
	pragma suppress( 매개변수 )  : 미리 정의한 예외에 대해 검사를 중단한다.
	Index_Check.

*/
/*
	3장. C++의 예외 처리

	머리 정의된 예외 X,모든 예외는 명시적 발생될 필요가 있다.

	ex) try
		{
			...
		}
		catch(형식 매개변수)
		{
			
		}
		...

*/
/*
	4장. Java의 예외 처리




	..


*/