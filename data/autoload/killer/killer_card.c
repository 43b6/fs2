inherit ITEM;

void create()
{
        set_name("ɱ������", ({ "killer_card" }) );
        set("unit", "��");
        set("long", "���Ǵ�˵�У��������ؼ�ɱ�ֵ����ƣ��벻�����Ȼ���У�\n");
        set("no_sell",1);
        set("no_give",1);
        set_weight(10);
        set("value",0);
}

int query_autoload ()
{
  if(!this_player()) return 0;
  if (this_player()->query("quest/memory") == 1)
    return 1;
  return 0;
}  
