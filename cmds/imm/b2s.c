// ��д�ĵ� --> Сд�ĵ���
// by wade@Fantasy.Space 8/22/87

inherit F_CLEAN_UP;

int main(object me, string arg)
{
  int n, i;
  string dir, cmds;
  mixed *file;

  dir = resolve_path(me->query("cwd"), arg);
  if (file_size(dir) == -2 && dir[strlen(dir)-1] != '/') dir += "/";
  file = get_dir(dir, -1);
  if (!sizeof(file)) {
    if (file_size(dir) == -2) return notify_fail("Ŀ¼�ǿյġ�\n");
    else
      return notify_fail("û�����Ŀ¼��\n");
  }

  n = sizeof(file);
  for (i=0; i<n; i++) {
    int         j, len;
    string      fn="xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";

    cmds = "mv " + file[i][0];
    fn = file[i][0];

    len = strlen (file[i][0]);
    for (j=0; j<len; j++) {
      if (file[i][0][j] <= 'Z' && file[i][0][j] >= 'A')
        fn[j] = file[i][0][j] + ('a' - 'A');
    }
    cmds += " " + fn;
    if (fn != file[i][0])
      this_player()->do_command (cmds);
  }

  return 1;
}

int help(object me)
{
        write(@HELP
ָ���ʽ: b2s

  ��˵ 8/22/87, wataru Ҫ��������� ftp �ɡ���д���ĵ�����ʮ����
ȫ�ĳ�Сд�ģ���Ҫ����ȴ���ȥ���ĳ�Сд�����ٴ���������
������ڿ������������һ����
  �Դ�����󣬾�����������ˡ�
  ��ָ���ת������Ŀ¼�µĵ�����д����д��Сд

                wade@Fantasy.Space 8/22/87
HELP
        );
        return 1;
}
