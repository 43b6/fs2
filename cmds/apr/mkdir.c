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
	  printf ("Ŀ¼ %s �����.\n", dir);
	else
	  write ("��Ŀ¼�����⣮\n");
	return 1;	
}

int help(object me)
{
	write(@HELP
ָ���ʽ : mkdir <��Ŀ¼��>

����һ����Ŀ¼��
HELP
	);
	return 1;
}
