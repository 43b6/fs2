// Room: /u/p/powell/room/r2.c

inherit ROOM;

void create ()
{
  set ("short", "����·");
	set( "build", 7 );
  set ("long", @LONG
��������վһ·��������, �⸽�����ǿ�����վ�ķ����ش�, ����
�̼��Ƽ�, ʹ�㾫��һ��, ��ʼ׼������һ��ð������, ����·������
�����⸽��Ψһ��ҩ��, ���������Ǽ�����̡�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/center/npc/sparrow" : 3,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/center/room/drug",
  "south" : "/open/center/room/iron",
  "west" : "/open/main/room/r26",
  "east" : "/open/trans/room/room4",
]));

  setup();
}
// by babe ��ֹ mob ����                   
int valid_leave( object me, string dir )   
{                                          
        if( dir=="east" && !userp(me) )    
                return 0;                  
                                           
        return ::valid_leave( me, dir );   
}                                          

