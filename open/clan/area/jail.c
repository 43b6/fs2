#include <ansi.h>
inherit ROOM;
int leave(object me);
void create()
{
  set("short", HIY"����Ľ���"NOR);
  set("long", @LONG
    ���������Ľ��䣬��������������ڴ������ţ������ڴ�
���ˣ��������޶����Ĵ󻵵�������͢���𵽴˵����ˣ�ͨ����
����δ�������ڵĻ����ǲ����ͷŵġ�
        [1;31m�� "check"���Լ�鿴���Ƿ��ܻص���ԭ��[0m
LONG
       );
set("light",1);
  set("no_fanset", 1);
  set("valid_startroom", 1);
  set("have_reborn", 1);
  set("no_chome", 1);
  set("light_up", 1);
  set("no_fight", 1);
  set("pkgame", 1);
  set("no_clean_up", 1);
  set("no_sac", 1);


   setup();
}
void init(){

        add_action("block_cmd","");
}
int block_cmd(string arg)
{
if((string)query_verb() == "check") return leave(this_player());
// �����ǿ����µ�ָ��
if((string)query_verb() == "look") return 0;
if((string)query_verb() == "ans")  return 0;
if((string)query_verb() == "say")  return 0;
if((string)query_verb() == "tell")  return 0;
if((string)query_verb() == "quit")  return 0;
if((string)query_verb() == "home")  return 0;

write("���㲻Ҫ����Ҷ�,���Ҷ�....\n");
return 1;
}
int leave(object me)
{
        int outtime;
        string msg="";
        if(me->query("mud_age")>me->query("jail_time"))
        {
        write(HIY"��ú��������ˣ����ٷ��ˡ�\n"NOR);
        me->delete("jail_time");
        me->move("/open/common/room/inn.c",1);
        }
        else 
        {
        outtime=me->query("jail_time")-me->query("mud_age");
        if ( outtime/3600 ){
                  msg=msg+HIR+outtime/3600+"Сʱ"+NOR;
                  outtime=outtime%3600;
        }
        if ( outtime/60 ){
                  msg=msg+HIW+outtime/60+"����"+NOR;
        }
        if ( outtime%60 ){
                  msg=msg+HIW+outtime%60+"��"+NOR;
        }
        write("�㻹��"+msg+"���ڲ�����\n");
        }
return 1;
}
