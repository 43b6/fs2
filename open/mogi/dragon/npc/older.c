

//����

inherit NPC;
string do_act();
string do_acc();
 int i=0;

void create()
{
        set_name("����",({"older"}));
        set("gender","����");
        set("age",50);
        set("class","blademan");
        set("str",10);
   set("long","һλ���������㲵����ˡ� .\n");
        set("chat_chance",10);
        set("chat_msg",({
                "����˵:�ҵĶ�����ô��������?\n"
                }));
      set("inquiry",([
 "����" : (:do_act:) ,
              "������" : (:do_acc:),
        ]));
        add_action("do_act","act");
        add_action("do_acc","acc");
        set("combat_exp",1000000);
        setup();
        add_money("silver",1);
}
int accept_fight(object who)
{
 return notify_fail("����˵:���Ѿ����ˣ��������ˡ�\n");
}
void init() {
        object obj;

        ::init();
        if(interactive(obj=this_player()) && !is_fighting()) 

        {
        remove_call_out("greeting");
        call_out("greeting",2,obj);
        add_action("do_say","say");
        }
}
void greeting(object ob)
{
        command("think ");
}
  string do_act()
{
        command("say �ҵĶ��Ӽ���ǰ�������Ⱥ��һȥ�����ˡ� ");
        command("say ��˭�ܰ����һ�����?");
        command("say ������һ�����һ���б��ꡣ");
        command("say ���������ǣ����");
        this_player()->set_temp("can_say",1);
        return "������?";
 }
   void do_say(string str)
{
  object me;
  me = this_player();
  if(this_player()->query_temp("can_say")==1)
   {
  if(str=="����")
  {
   //message_vision("$N˵�� : ���� \n",me);
        new("/u/p/poloer/dragon/obj/letter")->move(this_player());
   message_vision("����˵:�Ǿ��鷳�ˡ�\n",me);
   if(this_player()->query("gender")=="����")
  command("say ���ҽ�����һ���� , ��������Ҷ�,����ؽ�������");
  if(this_player()->query("gender")=="Ů��")
   command("say ���ҽ�����һ���� , ��������Ҷ�,����ؽ�������");
  command("smile");
  this_player()->delete_temp("can_say",1);
        }
  
  }
}

string do_acc()
{
object me;
me = this_player();
        command("say �����Ǹ��ֲܿ��ĵط�����������ֻ������ ");
        command("say �������������Ｘ��ǰ��һ�������ռ���ˡ�");
        command("say �ҵĶ��Ӹպõ���ȥ�����⣬��.......��");
        command("say �����˵Ȼ��ǲ�Ҫȥ�ĺá�");
                command("say ������˵������ɱ����......��!�Ҳ�����˵�ˡ�");
        return "��ȥ��?";
}


void heart_beat()
{
        if( random(5) < 2 ){
        if(!is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
            if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
                           }
        }
        :: heart_beat();
}       
