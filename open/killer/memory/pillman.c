#include <ansi.h>
#include </open/open.h>
inherit NPC;
inherit SSERVER;
string black();
string spill();

string spill()
{
  if ( !present("herb",this_player()) )
    return "û�и�ʿɽ�زݣ���Ҫ����ʲô��\n";
  this_player()->set_temp("herb_1",2);
  return "����ҩ�ͰѶ��������Ұ�!!\n";
}

string black()
{
  if (this_player()->query_temp("mission2") !=1)
    return "�ޣ��ޣ��㽲�ޣ�ֻҪ�ȿ�ˮ��";
  this_player()->set_temp("kill_fu",1);
  return "�Ǹ�������Ľ��Ż쵰���������ϵ�������ң��Ҿ͸�����";
}
  
string hate()
{
object me=this_player();
  if (this_player()->query_temp("memory") !=2)
  {
	command("say ��Ҫ���ң����");
    message_vision(HIR"ֻ������һ�ƽ�����\n"NOR);
	this_player()->add("kee",-50);
	this_player()->move(__DIR__"floorm.c");
             return "��ʲ������Ӳ����˽���";
  }
 message_vision(HIY"���Ǻ�������һ��������.....\n"NOR,me);
 message_vision(HIY"��ʱ������������������Ϲ�����³��Ƿǳ�Ҫ�õ�����\n"NOR,me);
 message_vision(HIY"��������ȴͬʱϲ����������\n"NOR,me);
 command("blush");
 message_vision(HIY"����������ǰ��δ�е��������Σ�������ȴ�޷�����������˭\n"NOR,me);
 message_vision(HIY"Ȼ���ؼ�����ĳ���¼��У��Ǿ������պ��ҵ��ѱ��¼���\n"NOR,me);
 message_vision(HIY"ԭ������ʱ�뿪��̳�������ȥ�������ߵļ��ɵĹ³�\n"NOR,me);
 message_vision(HIY"��ʵ������Ϊ����������֮��Ĺ�ϵ�����Բ��뿪��̳��\n"NOR,me);
 message_vision(HIY"Ȼ������ʱȴ�����ѱ��¼���ʹ�ú�������ħ�����뽻ս��Σ��\n"NOR,me);
 message_vision(HIY"���ò���������һ���¼�������ȴ���������������ִ\n"NOR,me);
 message_vision(HIY"��Ϊ����Ϊ��Ҫ�ȱ����պ��ҽ�����ħ����󷨣��Ž����\n"NOR,me);
 message_vision(HIY"Ȼ�������ٱ�����Ϊ�����Ϻ����ݺ����γɴ�һ�¼�������\n"NOR,me);
 message_vision(HIY"���³���Ϊ��ά������������ɱ���Ϻ��ң����佻��ħ��\n"NOR,me);
 message_vision(HIY"�������˱��ں�ɽ��������������������˴�Ļ���֮ʱ\n"NOR,me);
 message_vision(HIY"����������й³ǣ���ʱ�³���Ϊ���Ұ��а���������\n"NOR,me);
 message_vision(HIY"��������ս����ת����ȥ..........\n"NOR,me);
 message_vision(HIY"����������Ϻ������µ����壬���������͵�߷����������¶�\n"NOR,me);
 message_vision(HIY"ʹ�ù³����������أ����ò���Ȩ������Ҷ��ɱ\n"NOR,me);
 message_vision(HIY"����Ҳ���չ˹³ǵĹ����У��������Ͳ���³����������֮��\n"NOR,me);
 message_vision(HIY"���ǰѷ���Ҳ��������֮���������þ�����.....\n"NOR,me);
 message_vision(HIY"�����쾹������͵�ߣ���͵͵���������Լ��Ĵ���n"NOR,me);
 message_vision(HIY"�����³�ȥ������ʾ�Һ��ӳ�ǽ........\n"NOR,me);
 message_vision(HIY"�³�һŭ֮�£�Ҳ�������������Զ�߶��\n"NOR,me);
 message_vision(HIY"�ұ�һ·׷���˹�ȥ������ȴû��׷�ϣ����ڶ�����������\n"NOR,me);
 message_vision(HIY"��û���κ���Ѷ��Ҳֻ�лص���̳֮�У�\n"NOR,me);
 message_vision(HIY" ��ʱ����������������Ҷ��ɱ������Ϊɱ�ֵĵڶ�������  \n"NOR,me);
 message_vision(HIY"��Ҳ��Ը�����¹����������Ҿʹ�ɱ�ֵĵ�һ�߹�����������   \n"NOR,me);
 message_vision(HIY"���±��Ϊ����ͷ���������ӣ���Ը�����һ��æ��   \n"NOR,me);
 message_vision(HIY"����ҵ��Ǽ���ס�ĸ����ĺ�����һ��������  \n"NOR,me);
message_vision(HIY"����³��뿪ʱ����������˵�ж����ڴ��㸹�У�Ҫ��ȥ��   \n"NOR,me);
message_vision(HIY"����һֱ�Ҳ������⼸����Ϊ�������̳����Ҳû��ȥ����   \n"NOR,me);
this_player()->set_temp("memory",3);
 return "����ģ�����ҵ��Ļ������Ż�����ĺô���.....";
}

int accept_object(object wo,object ob)
{
  object me,ob2,ob3;
  
  me=this_player();

  if(ob->query("id") == "hair")  //����֮��     
  {
    if (this_player()->query_temp("memory") != 1)
    {
	command("say ����������");
             destruct(ob);
      	return 0;
    }
    command("sm "+this_player()->query("id"));
    command("say ��������õ��ģ��ǲ��Ǵ��������������õ��ã�\n");
    command("say �ɶ����Ϲ���Ϊ������������ң��Ϳ��Ի���(���)��");
    me->set_temp("memory",2);
    destruct(ob);
    return 1;
  }

  if(ob->query("id") == "special can")  //����֮�յĴ�����֮��ľ���
  {
    if (this_player()->query_temp("memory") < 7)
    {
	command("say С�������������ɱ�ĶԲ��ԣ�  û�գ�");
	 destruct(ob);
      	return 0;
    }
    command("spank "+this_player()->query("id"));
    command("say �������ڹ³�ר�õĴ���Ͳ");
    message_vision(HIG"���Žӹ���Ͳ����������ַ�����Ͳ��\n�������ó�һ����Ƥֽn"NOR,me);
    message_vision(HIG"���Ż����Ķ��������������ص����飬���̾��һ����.....\n"NOR,me);
    command("say ���죬���������������............");
    message_vision(HIM"֮�����Ž������Դ�ɻ�������....�������Ž�˵�£���֪��\n"NOR,me);
    message_vision(HIM"ԭ�����������Ϻ��������µ����壬��Ҫ��������֮�����ս\n"NOR,me);
    message_vision(HIM"Ҷ�³ǽ��ƾͼ����������Ϻ��ң����뿪��̳�����Ƿ�ᰵɱҶ�³�\n"NOR,me);
    message_vision(HIM"���ǣ����Ϻ��Ҳ�û���ϵ���ԭ����Ҫ�ٴλص���̳��\n"NOR,me);
    message_vision(HIM"����������������۹��󣬸е���孵��������ƺ�����͸����\n"NOR,me);
    message_vision(HIM"���ҷ����в������Ѿ���Ϊ���ɵĵڶ����������ˣ����ǲ�֪������Щ��\n"NOR,me);
    message_vision(HIM"��������ɱ���Ź������Ǳ�������춨�¼�����ɵڶ����������˵ļƻ�\n"NOR,me);
    message_vision(HIM"��Ϊ�¹��ش�Ϊ�����ݾ��ߣ�Ҷ�³Ǳ�Զ�߶�季�˳����װ�����鱨\n"NOR,me);
    message_vision(HIM"��������Ҳ������Ҷ����˵����Ҳ������ȥ�ҳ����Ϻ���\n"NOR,me);
    message_vision(HIM"�Ż��γ�Ŀǰ������.......\n"NOR,me);
    command("say С���ѣ���л���æ���ţ������������ȥ��˳��ȥ�Ҷ������������ô���");
    message_vision(HIR"���Ž�����һ������\n"NOR,me);	
     ob3=new("/open/killer/memory/card.c");
     ob3->move(me);
    me->set_temp("memory",8);
   destruct(ob);

    return 1;
  }

 if(ob->query("id") == "fu_page") //��Ѫ����֮�յ����
  {
    command("grin "+this_player()->query("id"));
    command("say ��Ȼ���ݣ��㹻���������\n");
    command("say ��ʵҲ�ܼ򵥣�����¥���ߵ�װ���ң�����Ҷ�³ǵ�����������Ѫ��֮��");
    command("say ���Ὺѽ�������ң���������ȥ�����ܿ��ˣ��������ŵı��ӣ�P");
    command("say ��ֻҪ��������Ц�Ǹ��Ϲ�������ڤ֮�����Ϳ����ˡ�");
    me->set_temp("mission2",2);
     destruct(ob);
    return 1;
  }

  if(ob->query("id") == "ghost can")
  {
    if (me->query_temp("mission2") == 4)
    {
      if (me->query_temp("tt")==1)
      {
       command("say ���һ�£�������һ�£����Ͼͺ���");
       message_vision(HIR"���Ŷ������Һ������к��������ϣ��ǳ�����\n"NOR,me);
       message_vision(HIR"����һ�ᣬ��������һ�У���ɫ�Ļ���\n"NOR,me);
       ob2=new("/open/killer/obj/black.c");
       ob2->add_amount(14);
       ob2->move(me);
       command("say ������Ǻ�Ѫ���룬С��һ�㣬��Ҫ���������Լ�");
       command("bye "+me->query("id"));
       me->set_temp("mission2",0);
      }
      else
      {
        command("say Ѫ��֮���أ�");
        me->set_temp("can",1);
      }
      destruct(ob);
      return 1;
    }
    else
    {
      command("say ����������");
 destruct(ob);

      return 0;
    }
  }

  if(ob->query("id") == "blood change")
  {
    if (me->query_temp("mission2") == 4)
    {
      if (me->query_temp("can")==1)
      {
       command("say ���һ�£�������һ�£����Ͼͺ���");
       message_vision(HIR"���Ŷ������Һ������к��������ϣ��ǳ�����\n"NOR,me);
       message_vision(HIR"����һ�ᣬ��������һ�У���ɫ�Ļ���\n"NOR,me);
       ob2=new("/open/killer/obj/black.c");
       ob2->add_amount(14);
       ob2->move(me);
       command("say ������Ǻ�Ѫ���룬С��һ�㣬��Ҫ���������Լ�");
       command("bye "+me->query("id"));
       me->set_temp("mission2",0);
      }
      else
      {
        command("say ��ڤ֮���أ�");
        me->set_temp("tt",1);
      }
     destruct(ob);
      return 1;
    }
    else
    {
      command("say ����������");
      destruct(ob);
      return 0;
    }
  }

  if(ob->query("id") == "herb")
  {
   switch (me->query_temp("herb_1"))
   {
     case 0 :
     {
      command("say �������Ҳ���˵������������ĸ�ʿɽ�ز���û���õģ�\n");
      me->set_temp("herb_1",0);
      return 0;
     }
     case 1 :
     {
      command("say ��Ҳ������һ�㣬����û��ζ�\n");
      me->set_temp("herb_1",0);
      return 0;
     }
     case 2 :
     {
      destruct(ob);
      command("say û�������������ã������һ�£������̾ͺá�����\n");
      message_vision(HIR"ֻ�����������Ķ���������ҩ����¯��\n"NOR,me);
      message_vision(HIR"��һ���������ɱ����ҩ���Ѿ�������\n"NOR,me);
      ob2=new("/open/killer/obj/s_pill.c");
      ob2->add_amount(14);
      ob2->move(me);
      command("say ��������ȥ�ɡ����ú�Ϊ��������һ������Ŷ��");
      command("bye "+me->query("id"));
      me->set_temp("herb_1",0);
      return 1;
     }
    }
  }
  command("? "+this_player()->query("id"));
  command("say �ǡ���������������\n");
  return 0;
}  
void create()
 {
  object ob;
  set_name("Ҷ����",({"old woman","old","woman"}) );
  set("long","ǧ��Ҫ��������������׶����¶��֡������ǳ���ɱ��Ŷ��\n");
  set("race", "����");
  set("gender","Ů��");
  set("combat_exp",101010);
  set("age",66);
  set("title","������ҩ����");
  set("class","killer"); 
  set("str",30);
  set("cor",30);
  set("cps",30);
  set("kee",500);
  set("max_kee",500);
  set("force",100);
  set("max_force",100);
  set("force_factor",3);
  set("bellicosity",150);
  set("inquiry",([
      "��ʿɽ�ز�" : "�����𣿲�����������Ϳ����á��һ����ɣ�ɱ����ҩ��\n",
      "���" : (: hate :),
      "ɱ����ҩ" : (: spill :),
      "��Ѫ����" : (: black :),
      ]));
  setup();
 add_money("gold",5); 
 ob=carry_object("/open/killer/obj/lustar");
 ob->add_amount(1000); 
 ob->wield();
 carry_object("/open/killer/weapon/k_arm1.c")->wear();
 carry_object("/open/killer/weapon/k_belt1.c")->wear();
 carry_object("/open/killer/weapon/k_cloth1.c")->wear();
 carry_object("/open/killer/weapon/k_coat1.c")->wear();
 carry_object("/open/killer/weapon/k_leg1.c")->wear();
 carry_object("/open/killer/weapon/k_torch.c")->wear();
}

void init()
{
    object ob;
    ::init();
  if( interactive(ob = this_player())&& !is_fighting() ) {
    remove_call_out("greeting");
    call_out("greeting",1,ob);   }
}

int accept_kill(object ob)
{
  message_vision( this_object()->name()+"����ôҪɱ�ң�.....��~\n",ob);
  command("say ���˷�ŭ�ļһ�����³Ǵ͸��ҶԿ���������");
  this_object()->set("combat_exp",650000);
  this_object()->set("max_force",1800);
  this_object()->set("gin",2000);
  this_object()->set("sen",2000);
  this_object()->set("max_kee",3000);
  this_object()->set("kee",3000);
  this_object()->set("eff_kee",3000);
  this_object()->set("force",1800);
  set_skill("dodge",85);
  set_skill("move",75);
  set_skill("parry",75);
  set_skill("throwing",80);
  set_skill("rain-throwing",70);
  set_skill("shade-steps",85);
  map_skill("throwing","rain-throwing");
  map_skill("dodge","shade-steps");
  this_object()->set("title","����ɱ����ҩʦ");
  command("say ���ڴ���Ұ�����㿴���ҵ���������");
  command("wield star");
  this_object()->kill_ob(this_player());
    return 1;
}

int accept_fight(object me)
{
    command("say �ǡ����������ûʱ��������");
    command("waggle "+this_player()->query("id"));
    return 0;
}

void greeting(object ob)
{
  if(this_player()->query("id")=="wataru")
  {
   command("say ��....���С�����ˣ��ø��ˣ���");
   command("kiss wataru");
  }
  else
  { command("smile "+this_player()->query("id"));}
}   
