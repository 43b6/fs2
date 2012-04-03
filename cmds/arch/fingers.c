// finger.c
#include <ansi.h>

#define INFO "/data/info/"
inherit F_CLEAN_UP;

void create()
{
        seteuid(getuid());
}

int main(object me, string arg)
{
  object ob, body;
  int    r=0;

  if (arg) arg = lower_case(arg);

  if( !arg )
    return notify_fail("fingers <����>\n");
  if ( !(ob = find_player(arg)) ) {
    ob = new(LOGIN_OB);
    ob->set("id", arg);
    if ( !ob->restore() )
      return notify_fail ("û�������ҡ�\n");
    body = LOGIN_D->make_body(ob);
    if (body->restore()) ob = body;
    else return notify_fail (arg+" �ĵ�����������, ���鿴��.\n");
    r = 1;
  }
  "/cmds/std/score"->wiz_score(ob);
  if (r) destruct(ob);
  return 1;
}

int help(object me)
{
  write(@HELP
ָ���ʽ : fingers [ʹ��������]
 
HELP
    );
    return 1;
}
