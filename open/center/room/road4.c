// Room: /u/p/powell/room/r4.c

inherit ROOM;

void create ()
{
  seteuid(getuid());

  set ("short", "����·");
  set ("long", @LONG
������������ɽ��ˮ, ��������������ʱͣ������Ϣ����ĵط�, ����
�ǴӾ���ͨ�����������Ϸ���ս��Ҫ��, ��ǰ����������������վ�Ĵ���,  
��˵��ʱ��Ϊ���義����߽������, �Խ����ܷ�������վ�Ĺ���, ������
�����߿ɻص�����, ���ߵ��̵��ϰ���˵��Ϣ��Ϊ��ͨ, �ϱ�����һ��Ǯׯ,
���ڶ�α�ϴ��, �ڰ�ȫ�������Ѿ���ȫ����ѡ�
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/center/npc/dog" : 1,
]));
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/trans/room/room4",
  "north" : "/open/center/room/store",
  "south" : "/open/center/room/bank",
  "east" : "/open/main/room/r27",
]));

  setup();
}
// by babe ��ֹ mob ����                   
int valid_leave( object me, string dir )   
{                                          
        if( dir=="west" && !userp(me) )    
                return 0;                  
                                           
        return ::valid_leave( me, dir );   
}                                          

