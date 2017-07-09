
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


단어 사이마다 _가 들어가야함.
단어 사이마다 _를 넣기 위해서는 단어의 시작만 알아도 됨.
CameleCase의 경우 단어의 시작이 대문자로 시작하고 있지만 단어의 제일 처음은 소문자로 시작

단어의 첫부분에서 문자들을 모두 1칸씩 이동
첫부분이 있던 위치에 '_'를 넣는다.