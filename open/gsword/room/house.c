#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "��ª������");
	set("long", "�������ڳ��˼������Σ��յ���һ�����У������Ƶ��Ƕ�����ǽ��һ�ǣ����ϻ�����
һЩ����ľ�̳��Ƭ����һ��̲�ľ�ˮ���ɼ��������ӵ������ȾƳ��ԣ��Ե������
���ĵز��ˡ�
");

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/npc/drunkard.c" : 1,
]) );

  set("outdoors", "n" );

  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"rroad3",
]) );


  setup();
}
