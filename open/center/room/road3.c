// Room: /u/p/powell/room/r3.c

inherit ROOM;

void create ()
{
  set ("short", "����·");
  set ("long", @LONG
��������·���ǹᴩ��վ�ϱ�����ʯ����, ����������־��ڸ���, 
�����ָ��Ե����ַǷ�, ��ˮ����, �����ֵ��ɵ�С��һ��, ������������
����ײ��, �ɴ�������, ���ǽ��������������ĳ�����, �����߾���������
�ֵ����С�
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"biau",
  "north" : "/open/trans/room/room4",
  "south" : "/open/main/room/r31",
  "east" : __DIR__"car",
]));

  set("outdoors", "/open/main");

  setup();
}
// by babe ��ֹ mob ����                   
int valid_leave( object me, string dir )   
{                                          
        if( dir=="north" && !userp(me) )    
                return 0;                  
                                           
        return ::valid_leave( me, dir );   
}                                          

