#include "figure.h"

bool Figure::stroke(Step step, Figure* board[width][height])
{
    bool ans=false;

    board[step.w][step.h]=board[step.last_w][step.last_h];
    board[step.last_w][step.last_h]=nullptr;
    return ans;
}


bool Figure::stroke_h_w(Step step, Figure* board[width][height])
{
	bool ans=false;

    if(step.h==step.last_h) //проверка хода по горизонтали
	{
        if(step.w>step.last_w) // право
		{
            for(int i=step.last_w+1; i<step.w; i++)
			{
                if(board[i][step.h]==nullptr)
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
        else //лево
		{
            for(int i=step.last_w-1; i>step.w; i--)
			{
                if(board[i][step.h]==nullptr)
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

    if(step.w==step.last_w) // проверка хода по вертикали
	{
        if(step.h>step.last_h) //вверх
		{
            for(int j=step.last_h+1; j<step.h; j++)
			{
                if(board[step.w][j]==nullptr)
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
			for(int j=step.last_w-1; j>step.w; j--)
			{
                if(board[step.w][j]==nullptr)
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

bool Figure::stroke_diag(Step step, Figure* board[width][height])
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
