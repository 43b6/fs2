#define WADE "/u/w/wade/npc/"
#define NAME "muse"
#define CNAME "����"
#define SEX "Ů��"

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
  
}
