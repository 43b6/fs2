// Room: /d/wiz/hall1.c
#include <room.h>


inherit ROOM;

void create ()
{
  set ("short", "��ʦ������");
  set ("long", @LONG
��������κλ�������������ʦ��, ���ڴ˵� post.  Ҳ��Ϊ����
�ṩ�������, ���Գ�������ʦ�Ǿۼ��ĵط�. ��Ȼ, ��ʦ��ÿ������
ͨ��Ҳ���������, ��������������, Ҳ�����Ѿ�©��������Ѷ��.
    �����ǳ�ʽд����, �Ǳ������Է��ʻ��ѯ����ʽд���йص�����
������֢, �������Ǹ�����йصķ���, Ҫ��������д��ʽ�򿪷�ĳһ
����, ������س�����ȥ�͹�, Ҳ���Ǳ߻���������������! ������
��һ���ʾ�, ����ʾ��Ѿ��������¹���, �����л�Ҫ˽�½���ʱ��,
�����ʾ���һ�������ѡ��.
LONG);

  set("valid_startroom", 1);
  set("exits", ([ /* sizeof() == 6 */
  "down" : "/u/c/chan/cl_room.c",
  "up" : __DIR__"hall3",
  "south" : __DIR__"program_room",
  "west" : __DIR__"post_office",
  "east" : __DIR__"entrance.c",
  "north" : __DIR__"jobroom",
]));


  setup();
call_other("/obj/board/wizard_b","???");   
}
