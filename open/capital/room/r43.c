// Room: /open/capital/room/r43.c

inherit ROOM;

void create()
{
        set("short", "�����۵�");
        set("long",@LONG
�Ƕ��ĳ�������Ϊ�˱��ھ��ӿ���ͨ�ж��衣�����̵�ʯ���൱
��������˵�ǰѴ���ɽ�ɵõĴ�ʯ�������ĥ��һ����ʯ�壬���ɵ�
�̽���������ƻ��ƣ�Ȼ����ƽ�̶��ɡ�

LONG);



  set("outdoors", "/open/capital" );

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r44",
  "south" : __DIR__"r42",
]) );

  set("gopath", "south" );

  setup();
}
