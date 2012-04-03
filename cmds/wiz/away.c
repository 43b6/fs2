// away.c

inherit SECURITY_D;
inherit F_CLEAN_UP;

int main(object me, string arg)
{
  int	i;

  if (!arg && me->query("away"))
  {
    me->delete("away");
    write("Away �����\n");
  }
  else if (!arg)
  {
    me->set("away", 1);
    write("Away �趨��\n"); 
  }
  else {
    me->set("away_msg", arg);
    write("��� away message ��� " + arg + "��\n");
    me->set("away", 1);
  }
  return 1;
}

int help(object me)
{
write(@HELP
ָ���ʽ : away <away message>
 
�ñ��˸���˵��ʱ������ away ��ѶϢ������һ��ָ��ͽ�� away 
 
HELP
    );
    return 1;
}
