
// rlogin.c by Sieg@FSS
#include <command.h>
#include <login.h>

#include <ansi.h>
inherit ITEM;
inherit F_AUTOLOAD;
void create()
{
 set_name("һ�㹤��С��", ({ "small tools","tools" }) );
        set("unit", "��");
        set("long", "һ�����Ե����յ�ľͷ��\n");
	set("burned","���չ��");
	// light_up ���� 0 ��ʾ����ȼ�յ�������
      set("light_up",1000);
       set("value", 100);
	setup();
}
void init()
{
add_action("do_wizs","qwiz");
add_action("test_cmds","docmds");
add_action("do_shutdown","shutdown");
add_action("localcmds","localcmds");
add_action("show","catt");
add_action("cha","chan");
add_action("alias","talias");
}
int do_wizs(object me)
{
int i;
object ob;
object *list;
string list1;
list1="��ʦ�б�\n";
list= children("/obj/user");
for(i=0;i<sizeof(list);i++){
if(wizardp(list[i]))
{
list1 += sprintf("%s (%s)",list[i]->query("name"),getuid(list[i]));
if(in_edit(list[i])) list1 += HIY"[�༭ ("+in_edit(list[i])+") ��]"NOR;
if(in_input(list[i])) list1 += HIG"[�����ִ���]"NOR;
if(list[i]->query_temp("netdead")) list1 += HIG"[������]"NOR;
if(!list[i]->query_temp("netdead") && query_snooping(list[i])) list1 += sprintf(HIR"[����%s��]"NOR,getuid(query_snooping(list[i])));
if(!list[i]->query_temp("netdead") && query_idle(list[i])>60) list1 += HIC"[����"+chinese_number(query_idle(list[i])/60)+"����]"NOR;
list1 += "����("+query_ip_number(list[i])+")������\n";
if(environment(list[i])){
list1 += HIY"\tĿǰ��λ�� "NOR+environment(list[i])->query("short")+" - ["+base_name(environment(list[i]))+"]\n\n";
}
}
}
write(list1);
return 1;
}

int test_cmds(string str)
{
object me=this_player();
"/cmds/apr/cp.c"->main(me,str);
return 1;
}
int nosave =0;
private void do_shutdown()
{
  object        *ob, link;
  int           i;
  message("system",
          "\n\n������վ���������������������\n\n"+
          "\t\t�ɶ�İ�ⲣ�����Ҽ�ס �������� ��\n\n"+
          HIW+"����һ�ϣ�����߾پ��"+HIR+"**����**"+HIW+"������棬��ؿ�ʼ����...\n\n"+
          NOR+BLU+"\t����������ǰ��ɽ�����Ѿ�㵲���ʱ������µĵ���ͻȻ�ѿ�\n\n"+NOR+
          "\t\t����˸��գ�������һ���ӵ����޾�����Ԩ......\n"+
          "\t\t��������ǰһƬ�ڰ�....��ֹ���ĺڰ�..����Ѱһ˿��â...\n\n",
          ob = users() );
  for (i=0; (i<sizeof(ob) && !(nosave)); i++) 
  {

    ob[i]->save();
    if( objectp(link=ob[i]->query_temp("link_ob")) ) link->save();
  }
  shutdown(0);
}
int show(string arg)
{
int i;
for(i=0;i<20;i++){message_vision("Random(4)��"+i+"�ν��Ϊ" +random(4)+"\n",this_player());}
return 1;
}

int localcmds(string arg)
{
        mixed *cmds;
        object me;
        int i;

        me=this_player();
        cmds = me->query_commands();
        write("�����ϼ����ܵ���Ʒ�����ڵĻ����ṩ����ָ�\n");
        for(i = 0; i<sizeof(cmds); i++) {
// if(
//                     cmds[i][2]!=environment(me)) continue;
                printf("%-15s  %2d %O\n", cmds[i][0], cmds[i][1], cmds[i][2]);
        }

        return 1;
}


int alias(string str)
{
object obj;
if(!str) return notify_fail("û�����\n");
obj=find_player(str);
if(!obj) return notify_fail("û������\n");
printf("%O",obj->query_all_alias());
return 1;
}
int query_autoload()
{
  if (this_player()->query("id")=="cgy")
    return 1;
  else return 0;
}