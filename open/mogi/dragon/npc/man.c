//�ű���

inherit NPC;
string do_act();
string do_acc();
string ask_tesin();

void create()
{
        set_name("�ű���",({"man"}));
        set("gender","����");
        set("age",50);
        set("class","blademan");
        set("str",10);
   set("long"," .\n");
        set("chat_chance",10);
        set("chat_msg",({
                "�ű���˵:�Һ�ʹ�ࡣ\n"
                  }));

        set("inquiry",([
         "�ƻ�" : (:do_act:) ,
         "�ؼ�" : (:do_acc:) ,
         "������" : (:ask_tesin:),
                      ]));
        add_action("do_act","act");
        add_action("do_acc","acc");
        set("combat_exp",1000000);
        setup();
        add_money("silver",1);
}
int accept_fight(object who)
{
 return notify_fail("�ű���˵:���ѹ������ˣ�����Ҫ�Ҵ򰡡�\n");
}
void init() {
        object obj;

        ::init();
        if(interactive(obj=this_player()) && !is_fighting())

        {
        remove_call_out("greeting");
        call_out("greeting",2,obj);

                }
}
void greeting(object ob)
{
        command("think");
}
  string do_act()
{
        command("say �Ҿ��Ǳ�����ռ�ݴ���ľ��� ");
        command("say ��������ǿ׳Ҫ�������������ŵơ�");
        command("say ˵��Ҫ���˴�����֮����");
        command("say �һ���˵�����������!");

 }
  string do_acc()
{
    command("say ��?����ǰ�ǵ�ʿ����,��ô����ȥ��?");
    command("say ����.��Ȼ���Ѿ�֪����,�Ͱ������!");
    this_player()->move("/u/p/poloer/dragon/enterroom.c");
}
string ask_tesin()
 {
if (!this_player()->query_temp("find_tesin4"))
  {
  this_player()->set_temp("find_tesin5",1);
  return ("������?���ҵ���֮ǰ..����Ͳ�����.");
  }
else if (this_player()->query_temp("find_tesin4")==1)
  {
  this_player()->set_temp("find_tesin5",2);
  return ("������?���ҵ���֮ǰ..����Ͳ�����.");
  }
else if (this_player()->query_temp("find_tesin4")==2)
   {
  this_player()->set_temp("find_tesin5",3);
  return ("������?���ҵ���֮ǰ..����Ͳ�����.");
  }

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
