#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"����ռ���ʷ��չ��"NOR);
  set( "long", "������վ�ͻ���ר��,���֮��fir..�Ⱦ�һֱû����Ϣ,����֮��,
�Ҽ�����������ķ�չ,��ʱ���˷�չ������,�Ҿ�����ʼ����д����
(clan)���ƶ�,֮ǰclan�ǲ���weiwei��д��ԭʼ��ʽ��������,����
�Ҿ�������,��дд�µ�,��ʱ��������,arthur��������,arthur��Es��
ǿ����ʦ,��ʱ����������,�������İ���ʹ���ڶ�ʱ��������˰��ɵ�
�����ܹ�..........
" );

  set("exits", ([
  "north" : __DIR__"newhand6-14",
  "south" : __DIR__"newhand6-16",
               ]));
  set("light_up", 1);
  setup();
}

