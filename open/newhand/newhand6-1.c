#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"����ռ���ʷ��չ��"NOR);
  set( "long", "����ռ�(Fantasy Space)������һ�ž�����ʮһ��,��ʱ��վ�Ĵ���
��Wade(�������),��ʱ����Wade�����˽���ʱWade��ES����ʦ,��������
��ES����ʦȺ���������в�ͬ�ĵط�,�������Es2libΪ��Ҫ�ܹ�,����
���˿���ռ�(Fantasy Space)!!��ʱFS�Ǽ�����Wade��ʦ���о�����!!!
" );
  set("exits", ([
  "northwest" : __DIR__"newhand",
  "south" : __DIR__"newhand6-2",
               ]));
  set("light_up", 1);
  setup();
}

