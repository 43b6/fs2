//--��ʱ�رգ����⾭��ֵ����   firedancer 2002/7/28
inherit ROOM;

void create ()
{
        set( "short", "����ɽ��" );
        set( "long", @LONG
ټ�����ɫɽ�ȣ������ѩ���������ϻ���
��һ�㱡����ѩ��������˻��ǳ��˲��ٵĻ���
���㵽������˵���������ҵ�һЩ����ҩ�

LONG);

  set("outdoors", "1");
        set("no_fight", 1);
        set("no_magic", 1);
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"m4",
//  "enter" : "/open/fire-hole/f-1.c",
  "west" : __DIR__"m6",
  "south" : __DIR__"m2",
]));

  setup();
}
//�ĳɽ�ȥ��check
// int valid_leave( object me, string dir )
//{
//      if( dir=="enter" && me->query("combat_exp")<5000000 )
//              return notify_fail( "����ֵ����, ��������ý�Ҳ��ͽȻ������\n" );
//      return 1;
//}
