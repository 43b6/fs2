// made by urd blacksword for avater

#include <ansi.h>
#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("�ڽ�",({"black sword","black","sword"}));
        set_weight(5000);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","��");
	set("long","����ʥ�ߴ��������������շ��Ķ�ħ����ɵĽ�������\n��ѽ��������˶�ħ��������������Ӣ��������ѽ���\n");
                set("material","crimsonsteel");
                set("value",500000);
        } //end of else
	init_sword(99);

	set("wield_msg","$N�����ȡ��$n�������С�\n");
	set("unwield_msg","$N��$n�Ż����Ľ�����\n");

        setup();

} // eof create()

int wield()
{
	if ((string)this_player()->query("class") != "avatar")
		return notify_fail("ֻ��ʥ���ŵĲſ������ң���\n");
        else {
                ::wield();
        } //end of else


     return 1;

} //EOF
