#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"����ռ���ʷ��չ��"NOR);
  set( "long", "ƽ˳һ��Ŀ�����һ�ž��������˺ܴ�Ķ���!!��ʱ����Urd�����
һֱ�ڹ�����ٻ���������Lum���㽫����ռ佻��Weiwei�����֣� 
���ֵ�ͬʱ��Reopen����������Weiwei���Ĵ����޷�ʹ����������  
��ͬ,����һЩ����,���Կ�����Weiwei�����ڼ䱻���˹���վ������  
���Ե�Wiz��������!!������Reopenһ��,ͬʱ������Wade�ĵ������Կ�  
���޷��ڷ�����ʦ��,��󲻵���ֻ�ù�վ!!!����Weiwei���ͽ���ʱ  
�Ŀ������ϼ������˴�ѧ!!!ͬʱAnmyҲ�õ��˽ϾɵĿ������ϲ�����   
����ר!!!                                                       
                                                                
" );

  set("exits", ([
  "north" : __DIR__"newhand6-5",
  "south" : __DIR__"newhand6-7",
               ]));
  set("light_up", 1);
  setup();
}

