
inherit NPC;
string ask_tesin();
void create()
{
        set_name("�ؾ�", ({ "sprite" }) );
        set("title","ħ������");
        set("race","Ұ��");
	set("gender", "����" );
        set("age",132);
	set("long","����ħ���ľ���, �ഫ����ؾ������ɵ�ħ��.\n");
	set("combat_exp",1000);
	set("attitude", "peaceful");
        set("chat_chance", 25);
        set("chat_msg", ({
              (: this_object(),"random_move" :),
             "�ؾ�̧����ͷ, �ô����۾�����������.\n",
             "�ؾ������Ķ�������˼��仰, ������������.\n",
             "�ؾ�����΢Ц, ¶�����������.\n",
        }) );
        set("inquiry",([
         ]));
	set_skill("parry", 20);
        set_skill("dodge", 20);
	setup();
        add_money("coin", 50);
         	
}
 string ask_tesin()
 {
if (!this_player()->query_temp("find_tesin3"))
  {
  this_player()->set_temp("find_tesin4",1);
  return ("������?������ʮ����ǰ..�͵�������ȥ��.");
  }
else
  {
  this_player()->set_temp("find_tesin4",2);
  return ("������?������ʮ����ǰ..�͵�������ȥ��.");
  }

}
