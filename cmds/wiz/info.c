// info.c

inherit F_CLEAN_UP;

int help(object me);

int main(object me, string arg)
{
	object obj;
	string str;

	if (!arg) return help(me);

	seteuid(geteuid(me));
	obj = find_object(arg);
	if (!obj) obj = present(arg, me);
	if (!obj) obj = present(arg, environment(me));
	if (!obj) obj = find_object( resolve_path(me->query("cwd"), arg) );
	if (!obj) return notify_fail("û���������....��\n");

	write("������\t\t" + base_name(obj) + ".c\n");
	write("����\t\t" + domain_file(base_name(obj)) + "\n");
	write("���ߣ�\t\t" + author_file(base_name(obj)) + "\n");
	write("Ȩ�ޣ�\t\tuid = " + getuid(obj) + ", euid = " + geteuid(obj) + "\n");
	write("ʹ�ü����壺\t" + memory_info(obj) + "\n");
	str = "";
	if( living(obj) ) 		str += "���� ";
	if( interactive(obj) )	str += "ʹ���� ";
	if( wizardp(obj) ) 		str += "��ʦ ";
	if( clonep(obj) ) 		str += "���� ";
	if( virtualp(obj) ) 	str += "���� ";
	if( query_heart_beat(obj) ) str += "����:" + query_heart_beat(obj) + " ";
	write("���ԣ�\t\t" + str + "\n");
	write("���Ƹ�����\t" + sizeof(children(base_name(obj)+".c")) + "\n");
	write("�ο����᣺\t" + refs(obj) + "\n");

	return 1;
}

int help(object me)
{
  write(@HELP
ָ���ʽ : info <���֮���ƻ���>

���ô�һָ��ɵ�֪һЩ�йظ��������Ѷ��
HELP
    );
    return 1;
}
