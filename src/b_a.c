// void DDA(int _iStartX, int _iStartY, int iEndX, int iEndY)
// {
// 	int iDisX = iEndX - _iStartX; // 먼저 X와 Y의 끝점에서 시작점을 때 각각의 증가량(거리)를 구해줍니다.
// 	int iDisY = iEndY - _iStartY;
// 	float fCurX = _iStartX;// 현재 X와 Y좌표
// 	float fCurY = _iStartY;
// 	int iTotalDis = 0; // 기준축의 총 거리
// 	iTotalDis =abs(iDisX) > abs(iDisY) ? abs(iDisX) : abs(iDisY); // X와 Y의 거리(증가량)을 비교해서 더 큰 게 기준축이 됩니다.
// 	PutPixel( round(fCurX), round(fCurY) ); // 처음 시작 좌표를 실수라면 반올림해서 찍어줍니다.
// 	float fIncX = abs(iDisX) / iTotalDis; // X의 길이를 기준으로 잡은 TotalDis로 나눠줍니다.
// 			// (만약 DisX의 길이가 5이고 iTotalDis가 5면 X축 기준이고 증가량은 1입니다.
// 	float fIncY = abs(iDisY) / iTotalDis;
// 			// Y의 증가량도 기준으로 잡은 TotalDis로 나눠줘 구해줍니다.
// 			// (만약 DisY의 길이가 2이면 기준축은 X, 나눠주면 Y의 증가값 나옴->)
// 	for( int i = 0; i < iTotalDis; ++i )// 0부터 기준축의 거리만큼 1씩 증가하면서 반복
// 	{
// 		fCurX += fIncX;// 아까 X축 기준이라면 1증가함
// 		fCurY += fIncY;// Y는 기존 Y값에 Y증가량 더해줌
// 		PutPixel( round(fCurX), round(fCurY) ); // 반올림해서 찍어주기
// 	}
// }

// int main()
// {
// DDA(3, )
// }
// #include<stdio.h>
// #include<graphics.h>

// //Function for finding absolute value
// int abs (int n)
// {
//     return ( (n>0) ? n : ( n * (-1)));
// }

// //DDA Function for line generation
// void DDA(int X0, int Y0, int X1, int Y1)
// {
//     // calculate dx & dy
//     int dx = X1 - X0;
//     int dy = Y1 - Y0;

//     // calculate steps required for generating pixels
//     int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

//     // calculate increment in x & y for each steps
//     float Xinc = dx / (float) steps;
//     float Yinc = dy / (float) steps;

//     // Put pixel for each step
//     float X = X0;
//     float Y = Y0;
//     for (int i = 0; i <= steps; i++)
//     {
//         putpixel (X,Y,RED);  // put pixel at (X,Y)
//         X += Xinc;           // increment in x at each step
//         Y += Yinc;           // increment in y at each step
//         delay(100);          // for visualization of line-
//                              // generation step by step
//     }
// }

// // Driver program
// int main()
// {
//     int gd = DETECT, gm;

//     // Initialize graphics function
//     initgraph (&gd, &gm, "");

//     int X0 = 2, Y0 = 2, X1 = 14, Y1 = 16;
//     DDA(2, 2, 14, 16);
//     return 0;
// }
