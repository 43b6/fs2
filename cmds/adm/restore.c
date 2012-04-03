// ȡ����ҵı������ϵ�.
// by wade (5/23/1996)
inherit F_CLEAN_UP;

int help();

int main(object me, string arg)
{
  string	src, dst, op, id;

  if (!arg) return help();
  if (sscanf (arg, "%s %s", op, id) != 2) {
    op = "-1";
    id = arg;
  }

  if (op == "-1") {
    dst = sprintf ("/data/login/%s/%s.o", id[0..0], id);
    src = sprintf ("/data/backup/login/%s/%s.o", id[0..0], id);
    if (!cp (src, dst))
      return notify_fail("�޷�ȡ�� "+id+" �����ϵ�.\n");

    dst = sprintf ("/data/user/%s/%s.o", id[0..0], id);
    src = sprintf ("/data/backup/user/%s/%s.o", id[0..0], id);
    if (!cp (src, dst))
      return notify_fail("�޷�ȡ�� "+id+" �����ϵ�.\n");
    write ("ȡ��������� ok.\n");
  }
  else if (op == "-2") {
    dst = sprintf ("/data/login/%s/%s.o", id[0..0], id);
    src = sprintf ("/data/backup2/login/%s/%s.o", id[0..0], id);
    if (!cp (src, dst))
      return notify_fail("�޷�ȡ�� "+id+" �����ϵ�.\n");

    dst = sprintf ("/data/user/%s/%s.o", id[0..0], id);
    src = sprintf ("/data/backup2/user/%s/%s.o", id[0..0], id);
    if (!cp (src, dst))
      return notify_fail("�޷�ȡ�� "+id+" �����ϵ�.\n");
    write ("ȡ��������� ok.\n");
  }
log_file("wiz/RESTORE",sprintf("%s restore %s on %s\n",
me->query("id"),id,ctime(time())));
  return 1;
}

int help()
{
	write(@HELP
ָ���ʽ�� restore -1|-2 ��� id		ȡ����ҵı�������

save ��浵 + ��һ�ݱ���
  save -b ��浵 + ��һ�ݱ��� + �ڶ��ݱ���
  ��ͨ״����, ������, �뿪�ȵ�, ϵͳֻ��浵, ���ᱸ��

  restore -1 ��ȡ�ص�һ�ݱ���
  restore -2 ��ȡ�صڶ��ݱ���

  ps: Ҫ��������뿪, ȡ��֮���ٽ���.
HELP
	);
	return 1;
}
