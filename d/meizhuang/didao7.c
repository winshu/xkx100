// /d/meizhuang/didao7.c
// Last Modified by winder on Apr. 10 2000
inherit ROOM;

void create()
{
	set("short", "÷ׯ�ܵ�");
	set("long", @LONG
����һ���谵��ʪ�ĵص����ص��ܳ������ߵ���������̫�����Ļ�
�ѣ��ص����Ե�ǽ���ϻ��źܶ಻֪�����Ժ���֮�ֵıڻ������һ���
�൱�ѿ�����ӿ�Ų�����֪���ص��ľ�ͷ��ʲô�ط���
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
		"west"  : __DIR__"didao6",
		"east"  : __DIR__"didao3",
		"south" : __DIR__"didao3",
		"north" : __DIR__"didao1",
	]));
	set("no_clean_up", 0);

	set("coor/x", 3490);
	set("coor/y", -1470);
	set("coor/z", 10);
	setup();
	replace_program(ROOM);
}