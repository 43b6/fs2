// Room: /u/p/powell/room/r1.c

inherit ROOM;

void create ()
{
  set ("short", "����·");
  set ("long", @LONG
����һ����ֱ�Ĵ���·, ��������ͨ���������ص�ɳĮ����,
�ϱ���������վ�Ĵ�㳡, ������һ��������, Ҫ��ɳĮ��������
�ÿ������Ƕ�������Ҫ���ϵȻ�ɫ. ��������һ�Ҽ�Ժ, �����
Ϊ�������;���ٶ���İ�? ��Ȼ����������.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/main/room/r19",
  "west" : "/open/center/room/gstore",
  "south" : "/open/trans/room/room4",
  "east" : "/open/center/room/loto",
]));

  set("outdoors", "/open/main");

  setup();
}
// by babe ��ֹ mob ����                   
int valid_leave( object me, string dir )   
{                                          
        if( dir=="south" && !userp(me) )    
                return 0;                  
                                           
        return ::valid_leave( me, dir );   
}                                          

