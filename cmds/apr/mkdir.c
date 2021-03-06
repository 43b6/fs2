// mkdir.c

inherit F_CLEAN_UP;

int help(object me);

void create() {seteuid(getuid());}
int main(object me, string arg)
{
	string dir;

	if(!arg) return help(me);

	dir = resolve_path(me->query("cwd"), arg);

	if (mkdirs(dir))
	  printf ("目录 %s 造好了.\n", dir);
	else
	  write ("造目录有问题．\n");
	return 1;	
}

int help(object me)
{
	write(@HELP
指令格式 : mkdir <子目录名>

建立一个子目录。
HELP
	);
	return 1;
}
