
코딩도장 문제들.  
============   
http://codingdojang.com  
  
  
1. CameleCase를 Pothole_case 로 바꾸는 함수  
=======================================  
http://codingdojang.com/scode/484?answer_mode=hide  
  
파이썬과 같은 몇몇 프로그래밍 언어는 Pothole_case 를 더 선호하는 언어라고 합니다.  
  
Example:  
  
codingDojang --> coding_dojang  
  
numGoat30 --> num_goat_3_0  
  
위 보기와 같이 CameleCase를 Pothole_case 로 바꾸는 함수를 만들어요!  
  
  
---------------------  
단어 사이마다 _가 들어가야함.  
단어 사이마다 _를 넣기 위해서는 단어의 시작만 알아도 됨.  
  
첫부분이 있던 위치(D가 있던 위치에)에 '_'를 넣고,  
그 뒤의 문자들을(ojang) 모두 1칸씩 이동  
  
  
2. 탭을 공백문자로 바꾸기.  
====================  
http://codingdojang.com/scode/405?answer_mode=hide  
문제)  
A씨는 개발된 소스코드를 특정업체에 납품하려고 한다. 개발된 소스코드들은 탭으로 들여쓰기가 된것, 공백으로 들여쓰기가 된 것들이 섞여 있다고 한다. A씨는 탭으로  들여쓰기가 된 모든 소스를 공백 4개로 수정한 후 납품할 예정이다.  
  
A씨를 도와줄 수 있도록 소스코드내에 사용된 탭(Tab) 문자를 공백 4개(4 space)로 바꾸어 주는 프로그램을 작성하시오.  
  
(풀이)  
source insight같은 tool에서 제공하는 tab width를 변경하는 기능을 제공하는 프로그램 작성하는 문제임.  
사이트의 문제를 자세히 보니 들여쓰기를 할때에만 탭을 공백으로 바꿔야한다는 조건이 있었음.  
  
1. 들여쓰기를 할 조건, \n다음에 \t가 올경우  
2. 들여쓰기 depth가 클경우, \t가 여러개다 -> \t의 갯수를 파악하는 루틴이 필요함.  
3. \t의 갯수에 따라 공백으로 바꾸기 위해 offset 연산이 필요함. -> tab_end의 offset, tab_start offset, tab갯수, 파일의 문자갯수필요  
4. file의 size는 \t를 공백으로 바꾸면서 바뀌므로 매번 갱신이 필요함.  
  