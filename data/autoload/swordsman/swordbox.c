#include <weapon.h>
#include <ansi.h>
inherit SWORD;
void create()
{
set_name(""HIC"ʥ����ϻ"NOR"",({"swordbox","sword"}));
set_weight(7000);
if( clonep() )
set_default_object(__FILE__);
else {
set("unit", "��");
set("long",
"һ���̻������ػ��ƵĽ�ϻ,��ϻ��ϸ������ԼԼ�������˾�η����Ϣ��\n");
set("value",0);
set("material", "crimsonsteel");
   set("no_drop", 1);
   set("no_give", 1);
   set("no_get", 1);
   set("no_auc", 1);
   set("weapon_prop/sword",10);
   set("rigidity",100);
}
init_sword(110);
setup();

}
void init()
{
     add_action("do_wield","wield");
     add_action("do_unwield","unwield");
}
int do_wield(string str)
{
::wield();
     if( query("equipped") )
     {
message_vision(HIC"$N���������صĽ�ϻ�г��"HIR"��"HIB"��"HIW"����"HIC",��ʱ���²��������,����������ע��"HIR"ʥ����"NOR"\n",this_player());
set_name(""HIR"��"HIB"��"HIW"����"NOR"",({"sun_moon_sword","sword"}));
set("long",
"�ɳ�������������Ľ����ѿ��������������ɵĽ�.....��߽�������ɫ
�������Ϊ����ɫ,��ȫ���ֳ��������������-���Ტ��-��\n");
}
}
int do_unwield(string str)
{
   if( str=="all" || str=="sword" || str=="sun_moon_sword")
     if( query("equipped") )
     {
        message_vision(HIW"$N������ʥ�����һ��...ʥ����������һ��,�Զ��ع齣ϻ�ڡ�\n",this_player());
set("long",
"һ���̻������ػ��ƵĽ�ϻ,��ϻ��ϸ������ԼԼ�������˾�η����Ϣ��\n");
set_name(""HIC"ʥ����ϻ"NOR"",({"swordbox","sword"}));
     }
}
int query_autoload()
{
   return 1;
}


