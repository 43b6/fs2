// set.c 作第一次修改 隐身问题 By Anmy 98/3/27


#define MAX_ENV_VARS	20

inherit F_CLEAN_UP;

int help();

int main(object me, string arg)
{
	int i;
        string term, *terms; 
        mixed data;
        mapping env;

	env = me->query("env");

	if( !arg || arg=="" ) {
		write("你目前设定的环境变数有：\n");
		if( !mapp(env) || !sizeof(env) )
			write("\t没有设定任何环境变数。\n");
		else {
			terms = keys(env);
			for(i=0; i<sizeof(terms); i++)
				printf("%-20s  %O\n", terms[i], env[terms[i]]);
		}
		return 1;
	}

	if( sscanf(arg, "%s %s", term, data)!=2 ) {
		term = arg;
		data = "YES";
	}

	if( term && term!="" ) {
		if( mapp(env) && undefinedp(env[term]) && sizeof(env) >= MAX_ENV_VARS )
			return notify_fail("你设的环境变数太多了，请先用 unset 删掉几个吧。\n");
		sscanf(data, "%d", data);

// 为了wiz_only  所加入的  By Anmy 98/3/27

	if( !wizardp(me) && (arg=="invisibility" || arg=="immortal" || arg=="隐身") )
		return notify_fail("只有巫师能用这个设定,Sorry 啦～\n");
		me->set("env/" + term, data);
		printf("设定环境变数：%s = %O\n", term, data);
		return 1;
	}

	return help();
}

int help()
{
	write(@TEXT
指令格式 : set <变数名> [<变数值>]
指令说明 :
           这个指令让你设定一些环境变数，不加参数时会显示你目
           前设定的环境变数，不指定变数值，则内定值为 "YES"。
           取消变数设定请用 unset 指令。 目前有些只有巫师专用
           的，如set 隐身 已取消玩者使用权。
           至于有哪些环境变数可以设定，请见 help settings。

TEXT
	);
	return 1;
}
