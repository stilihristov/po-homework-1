#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_INPUT_LENGTH 100


struct command_t 
{
	int valid;
	char operations[8];
	int argument_1;
	int argument2;
	int result;

};

int exec_cmd(struct command_t * , char* ,int , int);
int unary_operators(char * input_arr, int j);
void string_to_arguments(struct command_t * ,char *,int );

/*int unary(struct command_t * , char * , int , int);
int operation_check_unary(char *, 	int );
int unary_checker(char *,int );
*/



int main()
{
	int i,length = 32;
	char input_arr[MAX_INPUT_LENGTH];
	struct command_t cmd[MAX_INPUT_LENGTH];

	while(fgets(input_arr,MAX_INPUT_LENGTH + 1,stdin))
	{
		length = strlen(input_arr);
		//printf("\n%d\n",length);
		i++;
		string_to_arguments(cmd,input_arr,i);
		cmd[i].valid = exec_cmd(cmd, input_arr , i, length);
		if(!feof(stdin))
			printf("\n");
	};



	return 0;
}

int exec_cmd(struct command_t *cmd ,char * input_arr,int i, int length)
{
	int j;
	//printf("%s",input_arr);
	for(j = 0; j < length; j ++)
	{
	  if(input_arr[j] == ' ')
	  {
	  	
	  }
	}
	return 0;

}

int unary_operators(char * input_arr, int j)
{
	int x = j + 1;
	if(input_arr[x] == '+' && input_arr[x+1] == '+')return 0;
	else if(input_arr[x] == '!')return 0;
	else return 1;
}

void string_to_arguments(struct command_t * cmd,char * input_arr ,int i)
{
	int k = 0,l,arg1 = 0,arg2 = 0;
		
		do{
			if(input_arr[k] >= '0' && input_arr[k] <= '9')arg1 = arg1*10 + (input_arr[k] - '0');
			k++;

			if(input_arr[k] == ' ')
			{
				l = k;
				if(input_arr[l+1] >= '0' && input_arr[l+1] <= '9')arg2 = arg2*10 + (input_arr[l+1] - '0');	

			}
			

		}while(k < strlen(input_arr));


	/*cmd.argument_1 = arg1;
	cmd.argument2 = arg2;*/
}
