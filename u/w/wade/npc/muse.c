#define WADE "/u/w/wade/npc/"
#define NAME "muse"
#define CNAME "����"
#define SEX "Ů��"

inherit NPC;

void init()
{
    add_action("money", "ask");
}

void create()
{
        set_name( CNAME, ({ NAME }) );
        set("long",
"    ��������һλ�������ߵ�����Ů�ӣ������һ�ۿ�������ʱ��\n"+
"���д׾�һ��������ʰ���޲����δ...........\n"+
"����������İ��ˣ�������� order_"NAME" <commands> ������ͨ��\n"
        );
        set ( "gender", SEX );
        set("prevent_give_money", 1);
        // set("tactic_func", "call_help");
        set ( "have_partner", 0 );
        set("msg_min", "$N�����ŵĲ������˹�����");
        set("msg_mout", "$N�����ŵĲ����߿���");
  setup();
}

int money (string arg)
{
  object money;

  if (!arg) {
    write ("����˵����������ʲô����\n");
    return 1;
  }
  if (arg == "muse ���������뿪 wade ��??") {
    if (this_object()->query_temp(this_player()->query("id")+"/money") > 5) {
      say ("����˵����̫��λ���������Ŷ��\n");
      return 1;
    }
    else {
      say ("����˵�������⣬�ȸ���һЩ·�ѣ����Լ�ȥ�� wade �ɣ�\n");
      if (money = new("/obj/money/gold")) {
        this_object()->add_temp(this_player()->query("id")+"/money",1);
        money->set_amount (150);
        money->move (this_player());
        return 1; 
      }
      else {
  	write ("����˵����Ǯû�ˡ�\n");
	return 1;
      }
    }
  }
}
