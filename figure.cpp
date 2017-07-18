#include "figure.h"


bool Figure::stroke(Step step, Figure* board[height][width])
{
    bool ans=false;

    board[step.h][step.w]=board[step.last_h][step.last_w];
    board[step.last_h][step.last_w]=nullptr;
    return ans;
}


bool Figure::stroke_h_w(Step step, Figure* board[height][width])
{
	bool ans=false;

	if(step.w==step.last_w) //проверка хода по вертикали
	{
		if(step.h>step.last_h) // вверх
		{
			for(int i=step.last_h+1; i<step.h; i++)
			{
				if(board[i][step.w]==nullptr)
				{
					ans=true;
				}
				else
				{
					ans=false;
					break;
				}
			}
		}
		else //вниз
		{
			for(int i=step.last_h-1; i>step.h; i--)
			{
				if(board[i][step.w]==nullptr)
				{
					ans=true;
				}
				else
				{
					ans=false;
					break;
				}
			}
		}
	}

	if(step.h==step.last_h) // проверка по горизонтали
	{
		if(step.w>step.last_w) //вправо
		{
			for(int j=step.last_w+1; j<step.w; j++)
			{
				if(board[step.h][j]==nullptr)
				{
					ans=true;
				}
				else
				{
					ans=false;
					break;
				}
			}
		}
		else //влево
		{
			for(int j=step.last_w-1; j>step.w; j--)
			{
				if(board[step.h][j]==nullptr)
				{
					ans=true;
				}
				else
				{
					ans=false;
					break;
				}
			}
		}
	}

	return ans;
}

bool Figure::stroke_diag(Step step, Figure* board[height][width])
{
	bool ans=false;

	if(step.h-step.last_h>0 && step.w-step.last_w>0)  //проверка хода в первой четверти
	{
		for(int i=step.last_h+1, j=step.last_w+1; i<step.h;i++,j++)
		{
			if(board[i][j]==nullptr)
			{
				ans=true;
			}
			else
			{
				ans=false;
				break;
			}
		}
	}

	if(step.h-step.last_h>0 && step.w-step.last_w<0)  // проверка хода во второй четверти
	{
		for(int i=step.last_h+1, j=step.last_w-1; i<step.h; i++,j--)
		{
			if(board[i][j]==nullptr)
			{
				ans=true;
			}
			else
			{
				ans=false;
				break;
			}
		}
	}

	if(step.h-step.last_h<0 && step.w-step.last_w<0) // проверка хода в третий четверти
	{
		for(int i=step.last_h-1, j=step.last_w-1; i>step.h; i--,j--)
		{
			if(board[i][j]==nullptr)
			{
				ans=true;
			}
			else
			{
				ans=false;
				break;
			}
		}
	}

	if(step.h-step.last_h<0 && step.w-step.last_w>0)  // проверка хода в четвёртой четверти
	{
		for(int i=step.last_h-1, j=step.last_w+1; i>step.h; i--,j++)
		{
			if(board[i][j]==nullptr)
			{
				ans=true;
			}
			else
			{
				ans=false;
				break;
			}
		}
	}
	return ans;
}
