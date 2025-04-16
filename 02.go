package main
import (
	f"fmt"
	"sort"
)
type person struct {
	name string
	idd int
}

type people []person
func(m people) Len() int {
	return len(m)
}
func(m people) Less(i, j int) bool {
	return m[i].idd < m[j].idd
}
func(m people) Swap(i, j int) {
	m[i], m[j] = m[j], m[i]
}
func main() {
	var i int
	f.Scan(&i)
pessoa := make(people, i)
	for n:=0;n<len(pessoa);n++ {
		f.Scan(&pessoa[n].name, &pessoa[n].idd)
	}
	sort.Sort(pessoa)
	for _, pessoa := range pessoa{
	f.Printf("%s\n", pessoa.name)
	}
}