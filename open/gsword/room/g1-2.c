// Room: /open/gsword/room/g1-2.c
inherit ROOM;

void create()
{
  set ("short", "ƫ��");
  set ("long", @LONG
�������ɽ��ɵĽӴ���, ���������Ѿ��������ɵ�����, ��������
�������, ������ʿ, �������Ⱦ���ͨ��, �ڴ˵Ⱥ����ŵĽӼ�, Ϊ��
���ÿ�������, ������˸��ҵ�����, ��ȻҲȱ�ٲ���һЩ�������̵�
�ȵĶ��� .

LONG);

  set("light_up", 1 );

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"g1-1",
]) );

  setup();
}
