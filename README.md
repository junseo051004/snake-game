## 1. 개발환경 구축
### 1-1. 다운로드
- anaconda
- vscode

### 1-2. 아나콘다 세팅
- conda env list                        (가상환경 목록 보기)
- conda create -n developer pyton=3.11  (가상환경 생성)
- conda activate deveoper               (가상환경 접속)
- pip list                              (가상환경의 라이브러리 목록 보기)
- pip install pandas                    (pandas 라이브러리 설치)
- cls                                   (화면 클리어)
### 1-3. vscode 세칭
1. Extension 설치
 - python 
 - prettiep
 - python extension pack
 - atom material theme
 - atom material icons
2. Settings
 -[Mouse wheel zoom] 켜기
4. 아나콘다 가상환경 주입
 - [Ctrl] + [Shift] + [p] -> "Python: Select Interpreter" 클릭 후
 ### 1-4. 명령어 단축키
 - [ctrl] + [,] : settings 열기
 - [ctrl] + [`] : 터미널 열기

## 2. 데이터베이스(Database)
-   데이터를 효율적으로 관리하고 저장하는 시스템

## 2-1. DBMS(데이터 베이스 관리 시스템)
1. 관계형 DB(RDB)
    - 표(Table) 형태
    - MariaDB, Oracle, MySQL, PostgreSQL 
2. NoSQL
    - 자유 형태
    - MongoDB


## 99.  전체 시스템 구조(학습용) - WEB/APP 
- Client-Server 구조
- *Client: 고객 (웹 브라우저)
- *Server: 회사 (서비스를 동작하는 컴퓨터)
- A(클라이언트) -> 카톡 -> B(클라이언트)
- A(클라이언트) -> 카톡 -> 서버(카카오톡) -> 카톡 -> B(클라이언트)

1. 동작 순서
 + 클라이언트(naver.com) 요청!
 + 네이버 서버(메인 페이지에 필요한 소스들을 전송 → 클라이언트)
 + 클라이언트 소스 다운로드
 + 클라이언트 랜더링

2. 구조
                        *네트워크*         클라우드 컴퓨팅(AWS)
 Client              -> 요청(request)  ->  Server(LINUX) *운영체제*
 Client(랜더링)      <- 전송(request)   <-  ㄴ 컨테이너 (도커) 
                                                ㄴ 프론트 엔드 (HTML, CSS, JS, React.js, Vue.js)
                                                ㄴ 백엔드(Spring, FastAPI, Express, Django)
                                                ㄴ *데이터 베이스*(RDB,NoSQL) + SQL

*프로그랭밍 언어*(Python, JAVA)
디자인 패턴
*자료구조*    

