// wimpy
inherit F_CLEAN_UP;
inherit DIR_D;

int main(object me, string arg)
{
  string	msg, wimpydir;
  int		wimpy;

  if (!arg) {
    if (wimpy = me->query("env/wimpy"))
      msg = "���趨�����ܱ�����: "+wimpy+"��\n";
    else
      msg = "�㲢û���趨���ܱ�����\n";
    if (wimpydir = me->query("env/wimpydir"))
      msg += "���趨�����ܷ�����: "+wimpydir+"��\n";
    else
      msg += "�㲢û���趨���ܷ���\n";
    write (msg);
  }
  else if (sscanf (arg, "%d", wimpy)==1)
    if (wimpy <= 85 && wimpy >=0) {
      me->set("env/wimpy",wimpy);
      write ("���趨�����ܱ���Ϊ "+wimpy+"%��\n");
    }
    else
      write ("���ܱ������趨�� 0 �� 85 ֮�䡣\n");

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
