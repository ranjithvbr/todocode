import React from 'react';


export default class firstTest extends  React.Component{
    state={
        count:0
    }
    add=()=>{
        this.setstate({
            count:this.state.count+1
        })
    }
    sub=()=>{
        this.setstate({
            count:this.state.count-1
        })
    }
    render(){
        return(
            <div>
            <button onClick={this.add}>ADD</button>
            <button onClick={this.sub}>SUB</button>
            {this.state.count}</div>

        )
    }
}