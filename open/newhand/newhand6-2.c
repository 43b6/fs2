#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"����ռ���ʷ��չ��"NOR);
  set( "long", "��ʱ�մ����Ŀ���ֻ���ɽ���һ������,�����ų����������½�Ĳ���
��Wade˵��ֻ��д�������½�ķ���,������û��д��,��ʱ�������ڼ�֪��
����,��æ��վ�Ĵ�����Elon,����һЩ���ּ�����ʦ�磺fund��ccat��bigcat
ice...��(��ʷ̫����Ҳ��֪����)�������½��ɺ�,��������ɲ�½������..
...
" );
  set("exits", ([
  "north" : __DIR__"newhand6-1",
  "south" : __DIR__"newhand6-3",
               ]));
  set("light_up", 1);
  setup();
}

