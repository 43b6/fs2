// fund, ��д��ʽ����д help �İ�

inherit F_CLEAN_UP;
int main(object me,string arg)
{
	string cmds,str;
	string file;

	seteuid(getuid());
	if (!arg) return notify_fail ("��? ��Ҫʲô����?\n");
	if(sscanf(arg,"%s %s",cmds,str)!=2)
		cmds=arg;
	file="/daemon/class/normal/cmds/"+cmds;
	if(file_size(file+".c")>0)
		return file->main(me,str);
	file="/daemon/class/"+me->query("class")+"/cmds/"+cmds;
	if(file_size(file+".c")<=0)
		return notify_fail("û������ָ�\n");
	return file->main(me,str);
}

int help (object me)
{
        write(@HELP
ָ���ʽ : cmd <��������ר��ָ��>
ָ��˵�� :
           ���ָ���������ʹ������ר��ָ�
HELP);
}
