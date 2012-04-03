// wimpydir

inherit F_CLEAN_UP;
inherit DIR_D;

int main(object me, string arg)
{
  string	msg;
  int		wimpy;

  if (!arg) {
    if (wimpy = me->query("env/wimpy"))
      msg = "���趨�����ܱ�����: "+wimpy+"��\n";
    else
      msg = "�㲢û���趨���ܱ�����\n";
    if (arg = me->query("env/wimpydir"))
      msg += "���趨�����ܷ�����: "+cdir(arg)+"��\n";
    else
      msg += "�㲢û���趨���ܷ���\n";
  }
  else if (arg == "none")
    me->delete("env/wimpydir");
  else {
    arg = abbrdir (arg);
    me->set("env/wimpydir", arg);
    msg = "���趨�����ܷ�����: "+cdir(arg)+"��\n";
  }

  write (msg);
  return 1;
}
int help(object me)
{
  write(@HELP
ָ���ʽ : wimpy [<����>]
ָ��˵�� :
           �趨���ܷ��򣬿���� flee/wimpydir ָ��ʹ�á�
HELP
    );
    return 1;
}
