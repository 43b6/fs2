// edit.c

inherit F_CLEAN_UP;

int main(object me, string file)
{
	if( !file ) return notify_fail("ָ���ʽ��edit <����>\n");

	if( in_edit(me) ) return notify_fail("���Ѿ���ʹ�ñ༭���ˡ�\n");

	seteuid(geteuid(me));
	file = resolve_path(me->query("cwd"), file);
	ed(file);
	log_file ("file_operation", sprintf("%s�༭���� %s ��%s\n",
	  me->short(), file, CHINESE_D->chinese_time(time()))
	);
	me->set("cwf", file);
	return 1;
}

int help(object me)
{
  write(@HELP
ָ���ʽ : edit <����>, edit here

���ô�һָ���ֱ�������ϱ༭������
HELP
    );
    return 1;
}
