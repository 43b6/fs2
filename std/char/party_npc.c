 
#include <ansi.h>
 
inherit NPC;
 
int test_limit();
 
int party_with(string str)
{
   object me,obj;
   string str1;
   me=this_player();
   if(!str || sscanf(str,"with %s",str1) != 1)
       return notify_fail("��ʽ�� party with <npc> \n");
   if( this_object() != (obj = present(str1,environment(me))))
       return notify_fail("�����˭��ӣ�\n");
   if(!str1=obj->query("be_party_msg"))
       str1 = "��λ"+obj->name()+"�����Ƿ��������ͬ��?";
   message_vision(
       CYN "$N˵����"+str1+"\n"NOR,me,obj);
// ����Ϊ�� party �������Ƶ�
   if(obj->query("lim")==1)
        if(test_limit()==0)
          {
           if(!str1=obj->query("lim_msg"))
               str1= "�Ҳ�Ը����Ϊ�顣";
           command("say "+str1+"\n");
           return 1;
          }
 
   if(obj->query_temp("id")) {
       command("shake");
       command("say �ܱ�Ǹ�����Ѿ�׷����ˆ���");
       return 1;
       }
 
   if(me->query_temp("party_number") >= 5) {
       command("hmm");
       command("say ��Ķ��������Ѿ���ǿ���ˣ�����Ҫ�Ҽ��롣");
       return 1;
       }
 
   if(!str1 = obj->query("parry_succeed_msg"))
       str1 = "�ð�! ��������һ��ͬ�а�!";
   command("say "+str1);
   command("follow "+me->query("id"));
   me->set_temp("party_number", me->query_temp("party_number")+1);
   obj->set("describe","��Ŀǰ��"+me->name()+"����Ա��\n");
   obj->set_temp("id",me->query("id"));
   return 1;
}
int test_limit()
{
        return 0;
}
int unparty(string str)
{
   object me,obj;
   me=this_player();
   if( this_object() != (obj = present(str,environment(me))))
       return notify_fail("�����˭��������ϵ?\n");
   if(me->query("id")!=obj->query_temp("id"))
       return notify_fail("������������Ķ��顣\n");
   message_vision(
     CYN "$N˵����"+obj->name()+" ! ����֮��Ķ����ϵ����Ϊֹ��\n"
NOR,me,obj);
   command("say ��.......");
   command("say ��!!...");
   if(obj->query("will_angry")==1)
   {
      command("say ����������������....������ !");
      obj->kill_ob(me);
   }
   me->set_temp("party_number", me->query_temp("party_number")-1);
   obj->delete_temp("id");
   obj->delete("describe");
   return 1;
}
void die()
{
   string myid;
   object me;
   if(myid = this_object()->query_temp("id"))
      if( me = find_player(myid))
          me->set_temp("party_number", me->query_temp("party_number")-1);
   ::die();
}
int order_npc(string arg)
{
   mapping std_cmds =([
        "wield"     :  1,
        "unwield"   :  2,
        "wear"      :  3,
        "remove"    :  4,
        "follow"    :  5,
        "kill"      :  6,
        "surrender" :  7,
        "say"       :  8,
	"get"	    :  9,
	"drop"      : 10,
        ]);
   object me,obj;
   string npc_name,str1,verb,act,re;
   string cmd1;
   me = this_player();
    if( !arg ) return notify_fail("ָ���ʽ : order <npc> do <command>\n\n");
   if( sscanf(arg,"%s do %s",npc_name,str1) != 2)
       return notify_fail("\nָ���ʽ��order <npc> do <command>\n\n");
   if( this_object() != (obj = present(npc_name,environment(me))))
       return notify_fail("��Ҫ����˭��\n");
   if( me->query("id") != obj->query_temp("id"))
       return notify_fail("��ɵ��, ���ֲ��������Ա...\n");
   if( sscanf(str1,"%s %s",verb,act) != 2) {
      verb = str1;
      act = "";
      }
 
   else if(!std_cmds[verb] && !query("npc_cmds/"+verb))
        return notify_fail("\n�Ҳ��������˼Ү! ��Ҫ�Ұ�����ʲô��ѽ��\n");
 
   if(me->query("class")=="officer")
       tell_object(me,CYN" ����! ����! С�����̾Ͱ졣\n\n"NOR);
   else
       tell_object(me,CYN" �ǵ�! ����! ��û���������\n\n"NOR);
 
   if( verb == "kill" && stringp(cmd1 = find_command(verb)) ) {
       message_vision(
       CYN"$N˵����"+obj->name()+"! ��������һ��Ϲ�����!\n\n"NOR,me);
       call_other(cmd1,"main",me,act);
      }
   command(verb+" "+act);
 
   return 1;
}

void init()
{
   :: init();
   add_action("party_with","party");
   add_action("unparty","unparty");
   add_action("order_npc","order");
}
 
 
