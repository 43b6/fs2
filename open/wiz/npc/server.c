#include <ansi.h>

inherit NPC;

void do_patrol();
void create()
{ 
	set_name("С�������",({"server","Sserver"}));
  set("age",2);
  set("long","��������С����,�����۶�������,ר�ǶԸ�����bugƵƵ���˵����\n");
  set("title","����ػ���");
  set("no_kill",1);
  set("combat_exp",1000000); 
  set("chat_chance",25);
  set("chat_msg", ({
  (: do_patrol :)
  }));
  setup();
}


void init() {
object obj;
::init();
        if(interactive(obj=this_player())) {
	   if(userp(obj)&&!wizardp(obj)) {
	      if(obj->query_temp("gowiz")) {
		if(obj->query("gowiz")) {
		   command("say ���������ƺ���������!!..����ô���");
		obj->save();
		   obj->die();
		   return;		
		}
		seteuid(ROOT_UID);
		command("say ˵�������˻���....��֪�ʷ�!!��������");
		message_vision("$N������˵,��$n�߳����������!!\n",this_object(),obj);
		obj->set("gowiz",1);
		destruct(obj);
		return;
	      } else {
		command("say �����ǽ�ֹ��Ҳι۵�,��Ҫ�����ˡ�");
		message_vision ("$N����һ��,��$n�����˴˴���\n",this_object(),obj);
		obj->set_temp("gowiz",1);
		obj->move("/open/common/room/inn");
                obj->set("startroom","/open/common/room/inn");
		return;
	      }	 
	  }
      
        }

return;
}

void do_patrol()
{
  if( random(2) == 1)
	command("go west");
  else
	command("go east");
  return;
}


