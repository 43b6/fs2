// Room: /open/snow/room/godrom2.c
// �����
#include <room.h>
#include <ansi.h>
inherit ROOM;
void create()
{
 set("short",HIM"�����"NOR);
 set("long", @LONG
���������ȵ��,��ǰ��Ӱ���������һ����ֻ��ǰ��ƽ̨�Ϸ���
��������ͬ��ɫ�Ĺ��ߣ��ڹ��ߵ�����������������������!!ʵ���Ƿ�
�����ˡ�
LONG
        );
 set("no_transmit",1);
 set("no_auc",1);
 set("exits", ([
     "out": "/open/snow/room/water",
     "south":__DIR__"godrom1",]) );
 setup();
}
void init()
{
  add_action("do_stand","stand");
}
int do_stand(string str)
{
  object ob,ob1;
  ob=this_player();
  if( str!="ƽ̨")
    return notify_fail("��Ҫվ������ȥѽ!!!\n");
  message_vision(HIW"$Nһ����Ծ��ƽ̨�ϣ���ʱ$N��ԡ�ڹ���֮�ио�ʮ�����!!\n"NOR,ob);
  message_vision(HIY"ֻ��$N���ڵ�"HIB"����֮��"HIY"�û������������ȥ�ˡ�\n"NOR,ob);
  message_vision(HIM"��Ȼƽ̨�Ե�������������$N���������ˣ���ʱ$N������ʮ����ã\n"NOR,ob);
  message_vision(HIW"$N�õ�����֮����.....(���Help god_kee��sec_god��˵��)\n"NOR,ob);
  ob->set("sec_kee","god");
  ob->set("max_s_kee",1);
  ob->set("s_kee",0);
    ob->set("quests/sec_god",1);
}

