#include <ansi.h>
inherit ROOM;

void create ()
{
  seteuid(getuid());
  set ("short", "��԰");
  set ("long", @LONG
�������������еĻ�԰,���ﲻ�������˸�ʽ���������滨��,
����ֲ�˺ܶ��ϡ�в���,����"�������¡�����������ʮ��ѧʿ"
,����Ҳ����Ϊ����Ĳ軨��������,��ֵ������ﾹȻ����һ
�㶼����������ӡ����Աߺ�����һ������,��ȥ�����ɡ�
LONG);

  set("search_desc/����",
         "����ϸ����һ�ң��������ӵ��м���Լ����·�ĺۼ���Ӧ�ÿ��Դ�(pass)��ȥ!!\n");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"aa51",
  "northwest" : __DIR__"aa54",
  "west" : __DIR__"aa53",
]));
}
void init()
{
    add_action("do_pass","pass");
}
int do_pass(string arg)
{
    object me=this_player();

    if(!arg) return notify_fail("����Ҫ����ʲô??\n");
    if(arg!="����") return notify_fail("����Ҫ����ʲô??\n");
    message_vision(HIG"$N"HIG"���ֲ������ӣ���С����ȥ!!\n"NOR,me);
    if(me->query("family/family_name")!="�μ�"){
      me->move(__DIR__"d0.c");
    }
    else{
      me->move(__DIR__"d1.c");
    }
    return 1;
}
