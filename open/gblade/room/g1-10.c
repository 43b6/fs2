inherit ROOM;

void create()
{
  set ("short", "������");
  set ("long", @LONG

ÿ������ŵĵ��Ӷ�Ҫ�����ﻥ�����һ�¹�������һ�����Ϊ����
ȡ��ߵ������ͻ�Ŭ���Ŀ������򡣵�Ȼ�ˣ����˱��ŵ��ӻ������֮��
�������Ҫ�������ŵĸ����̵ֽĻ�.....

LONG);

  set("light_up", 1 );
  set("outdoors", "/open/gblade" );
  set("valid_startroom", 0 );
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"g1-3",
]) );
  setup();
}
